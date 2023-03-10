#ifndef Game_hpp
#define Game_hpp

#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>
#include <SDL_image.h>

class Game {

public:
    Game();
    ~Game();

    void init (const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() {return isRunning; }

private:
    int cnt;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif /* Game_hpp */

