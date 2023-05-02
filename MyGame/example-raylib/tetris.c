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


static const int screenHeight = 800;
static const int screenWidth = 500;
static bool bGameOver = false;
static bool bGamePause = false;
static Vector2 Offset = { 0,0 };

// HEADERS

//static bool shouldSpawnNewPiece();
//static void TurnPiece();
//static bool isFullRow();
//static bool isCeilReached();
//
//static void UpdateMap();

//static void UpdateAndDraw();
//static void DrawGame();
//static void UpdateGame();
//static void UnloadGame();
static void InitGame();

int main()
{
	InitGame();

	/*while (!WindowShouldClose())
	{
		UpdateAndDraw();
	}
	UnloadGame();
	CloseWindow();*/

}

static void InitGame()
{
	Offset.x = screenWidth % BOX_SIZE;
	Offset.y = screenHeight % BOX_SIZE;
}
//static void UpdateAndDraw()
//{
//	UpdateGame();
//	DrawGame();
//}

static void DrawGame()
{
	if (!bGameOver)
	{
		//DrawLine();
	}
}