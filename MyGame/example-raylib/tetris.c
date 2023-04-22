#include "raylib.h"

// CONSTANTS
#define BOX_SIZE 50

// Objects
enum PieceShape
{
	Square,
	LShape,
	TShape,
	Straight,
	ZShape
};
typedef enum PieceShape PieceShape;

typedef struct Piece
{
	Vector2 position;
	Color color;
	Vector2 speed;
} Piece;
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

static void InitGame()
{
	
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