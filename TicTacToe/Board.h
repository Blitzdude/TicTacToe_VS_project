#pragma once
class Board
{
public:
	Board();
	~Board();

	void drawBoard();

private:
	char boardArray[3][3] = {
		{' ', ' ', ' ' },
		{' ', ' ', ' ' },
		{' ', ' ', ' ' } };
};

