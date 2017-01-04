#include <iostream>
#include <fstream>
#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <SDL_ttf.h>
#include <unistd.h>
#include <SDL_image.h>
#include "render.h"

using namespace std;

std::string inputText = "";
char textinput[256];
int pagina_pornire=1;
int ok_meniu1=0;
bool quit = false;
LTexture gInputTextTexture;


void input(SDL_Event e,int x,int y);
void fundal();
void meniu1(int x,int y,SDL_Event event);
bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Set texture filtering to linear
        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
        {
            printf( "Warning: Linear texture filtering not enabled!" );
        }

        //Create window


        //Create vsynced renderer for window
        //renderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
        if( renderer == NULL )
        {
            printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Initialize renderer color
            SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );

            //Initialize PNG loading
            int imgFlags = IMG_INIT_PNG;
            if( !( IMG_Init( imgFlags ) & imgFlags ) )
            {
                printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                success = false;
            }

            //Initialize SDL_ttf
            if( TTF_Init() == -1 )
            {
                printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
                success = false;
            }
        }
    }
}



int main(int argc, char ** argv)
{
    init();
    int x,y;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window * window = SDL_CreateWindow("MBB Monopoly",
                                           SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1024, 640, 0);

    renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface * image = SDL_LoadBMP("1.bmp");
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
    while (!quit)
    {
        SDL_WaitEvent(&event);

        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
        case SDL_MOUSEMOTION:
            x=event.motion.x;
            y=event.motion.y;
        }
        SDL_RenderPresent(renderer);
        if(pagina_pornire==1)
        {
            SDL_Rect dstrect = { 0, 0, 1024, 640 };
            SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        }
        if((x>= 0)&&(y>=0)&&(x<=1024)&&(y<=640)&&event.type==SDL_MOUSEBUTTONDOWN)
        {
            pagina_pornire=0;
            ok_meniu1=1;
        }
        if(ok_meniu1)
            meniu1(x,y,event);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}
void meniu1(int x,int y,SDL_Event event)
{
    fundal();
    SDL_Surface * image2 = SDL_LoadBMP("2.bmp");
    SDL_Texture * texture2 = SDL_CreateTextureFromSurface(renderer, image2);
    SDL_Rect dstrect2 = { 100, 150, 300, 70 };
    SDL_RenderCopy(renderer, texture2, NULL, &dstrect2);
    SDL_Surface * image3 = SDL_LoadBMP("3.bmp");
    SDL_Texture * texture3 = SDL_CreateTextureFromSurface(renderer, image3);
    SDL_Rect dstrect3 = { 100, 250, 300, 70 };
    SDL_RenderCopy(renderer, texture3, NULL, &dstrect3);
    SDL_Surface * image4 = SDL_LoadBMP("4.bmp");
    SDL_Texture * texture4 = SDL_CreateTextureFromSurface(renderer, image4);
    SDL_Rect dstrect4 = { 100, 350, 300, 70 };
    SDL_RenderCopy(renderer, texture4, NULL, &dstrect4);
}
void fundal()
{
    SDL_RenderClear( renderer );
    SDL_Rect fillRect = { 0, 0, 1024, 640  };
    SDL_Surface * image = SDL_LoadBMP("42.bmp");
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_Rect dstrect = { 0, 0, 1024, 640 };
    SDL_RenderCopy(renderer, texture, NULL, &dstrect);

}

void input(SDL_Event e,int x,int y)
{
    init();
    Font = TTF_OpenFont( "bauhaus.ttf",21 );
    int ok=1;
    SDL_Color textColor = { 0, 0, 0, 0xFF };

    //The current input text.

    gInputTextTexture.loadFromRenderedText( inputText.c_str(), textColor, Font);

    //Enable text input
    SDL_StartTextInput();
    while( ok )
    {

        //The rerender text flag
        bool renderText = false;

        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 )
        {
            //User requests quit
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
            //Special key input
            else if( e.type == SDL_KEYDOWN )
            {
                //Handle backspace
                if( e.key.keysym.sym == SDLK_BACKSPACE && inputText.length() > 0 )
                {
                    //lop off character
                    inputText.pop_back();
                    renderText = true;

                }
                //Handle copy
                else if( e.key.keysym.sym == SDLK_c && SDL_GetModState() & KMOD_CTRL )
                {
                    SDL_SetClipboardText( inputText.c_str() );
                }
                //Handle paste
                else if( e.key.keysym.sym == SDLK_v && SDL_GetModState() & KMOD_CTRL )
                {
                    inputText = SDL_GetClipboardText();
                    renderText = true;
                }
            }
            //Special text input event
            else if( e.type == SDL_TEXTINPUT )
            {
                //Not copy or pasting
                if( !( ( e.text.text[ 0 ] == 'c' || e.text.text[ 0 ] == 'C' ) && ( e.text.text[ 0 ] == 'v' || e.text.text[ 0 ] == 'V' ) && SDL_GetModState() & KMOD_CTRL ) )
                {
                    //Append character
                    inputText += e.text.text;
                    renderText = true;
                }
            }

        }

        //Rerender text if needed
        if( renderText )
        {
            //Text is not empty
            if( inputText != "" )
            {
                //Render new text
                gInputTextTexture.loadFromRenderedText( inputText.c_str(), textColor,Font );
            }
            //Text is empty
            else
            {
                //Render space texture
                gInputTextTexture.loadFromRenderedText( " ", textColor,Font );
            }
        }


        strcpy(textinput,inputText.c_str());
        SDL_Color textColor_red = { 255, 0, 0 };
        LTexture gTextTexture;
        gTextTexture.loadFromRenderedText( textinput, textColor_red,Font );
        gInputTextTexture.render( 0, 200 );
        SDL_RenderPresent( renderer );
        //Update screen




        if( e.key.keysym.sym == SDLK_ESCAPE||e.key.keysym.sym ==SDLK_RETURN )
            break;
    }

    //Disable text input
    SDL_StopTextInput();
}
