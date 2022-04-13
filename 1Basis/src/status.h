#ifndef sdl2_status_h
#define sdl2_status_h

// Прототипы функций
void init_game_over(GameState *game);
void init_status_lives(GameState *game);
void draw_status_lives(GameState *game);
void draw_game_over(GameState *game);
void shutdown_status_lives(GameState *game);

#endif