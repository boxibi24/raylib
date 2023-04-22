#include "raylib.h"

// CONSTANTS
#define BOX_SIZE 50

// Objects

typedef struct Piece {
	//int spawnPoint[4][4];
	int centerX;
	int centerY;
	Color color;
};

struct Piece* PieceConstructor(int* spawnPointInput[], int centerXInput, int centerYInput, Color colorInput)
{
	struct Piece* lShape = malloc(sizeOf(struct Piece*));
	//memcpy(lShape->spawnPoint, spawnPointInput);
	lShape->centerX = centerXInput;
	lShape->centerY = centerYInput;
	lShape->color = colorInput;
} Piece;

void PieceDestructor(struct Piece* piece){
	free(piece);
}
// global variables

static const int screenHeight = 800;
static const int screenWidth = 500;
static bool bGameOver = false;
static bool bGamePause = false;
static bool shouldSpawnNewPiece();
static void TurnPiece();
static bool isFullRow();
static bool isCeilReached();
static Vector2 Offset = { 0,0 };

static void InitGame();
static void UpdateAndDraw();
static void DrawGame();
static void UpdateGame();
static void UnloadGame();


// HEADERS



int main()
{
	InitGame();

	while (!WindowShouldClose())
	{
		UpdateAndDraw();
	}
	UnloadGame();
	CloseWindow();

}

static void InitGame(){
	printf("INIT :\n");
	int array[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
	struct Piece lShape = *PieceConstructor(array, 10, 20, RED);
	printf("%d %d %s :\n", lShape.centerX, lShape.centerY, lShape.color);
	
}
static void UpdateAndDraw()
{
	UpdateGame();
	DrawGame();
}

static void DrawGame()
{
	if (!bGameOver)
	{
		
	}
}

static void UpdateGame() {

}

static void UnloadGame() {

}