#include <stdio.h>
//#define N 3
//#define M 3
// ������ ������  �� � ����� ��������� � ��������� ������. ������ 1.
//1. ���������� ��������� � �������������.����������� ������ ������� � ������������ �
//���������� ���������� ���������.
//��������, �����:
//1 1 1
//0 1 0
//0 1 1

//void Print2(int n, int m, int a[N][M])
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%4d", a[i][j]);
//		printf("\n");
//	}
//}

//#define  W = 3         // ������ �������� ����
//#define H = 3         // ������ �������� ����
//#define WALL = -1         // ������������ ������
//#define BLANK =0        // ��������� ������������ ������
//#define START = 0

/*const*/ int W = 3;
/*const*/ int H = 3;
/*const*/ int WALL = -1;
/*const*/ int BLANK = 0;
/*const*/ int MARKED = 1;

struct  Cell    //������� ��������� ������
{
	int x;    // ���������� ������ �� �����������
	int y;		// ���������� ������ �� ���������
	int len;   // ����� ���� �� ������ �� ������
	int state; // ���������  
};

typedef struct Cell Cell;

//void WaweLee(Cell start, Cell finish, int x, int y )
//{
//
//}

int main(int argc, char * argv[]) {
	int i;
	int j;
	Cell grid[3][3];
	for ( i = 0; i < W-1; i++)			//����������� ��� ������� ������ ������������
	{
		for ( j = 0; j < H-1; j++)
		{
			grid[i][j].state = BLANK;
		}
	}
	// ���������� �����
	grid[0][1].state  = WALL;
	grid[0][2].state = WALL;
	grid[2][1].state = WALL;
	grid[0][1].state = WALL;

	

	//grid[2][2].state = -10;   //��������  ������
	if (grid[0][0].state == WALL || grid[2][2].state == WALL)
	{
		printf("No solutions, around walls......");		// ������ (ax, ay) ��� (bx, by) - �����
		getch();
	}
	else
	{
		//int dx[4] = { 1, 0, -1, 0 };   // ��������, ��������������� ������� ������
		//int dy[4] = { 0, 1, 0, -1 };   // ������, �����, ����� � ������
		//int d, x, y, k;

		//d = 0;
		//grid[0][0].state = 0;   //��������� ������
		//grid[0][0].len = 0;
		//int stop=0 ;
		//do 	{
		//	int stop = 1;
		//	for ( y = 0; y < H; ++y)
		//	{
		//		for ( x = 0; x < W; ++x)
		//		{
		//			if (grid[y][x].len == d)
		//			{
		//				for (k = 0; k < 4; ++k)                    // �������� �� ���� ������������ �������
		//				{
		//					int iy = y + dy[k], ix = x + dx[k];
		//					if (iy >= 0 && iy < H && ix >= 0 && ix < W &&
		//						grid[iy][ix].state == BLANK)
		//					{
		//						stop = 0;              // ������� ������������ ������
		//						grid[iy][ix].len = d + 1;      // �������������� �����
		//						grid[iy][ix].state = MARKED;
		//					}
		//				}
		//			}
		//		}
		//	}
		//		d++;
		//} 
		//while (grid[2][2].len != BLANK && stop!=1);



		if (grid[2][2].state == BLANK)   // ���� �� ������ �� �������� ����� �� ������
		{
			printf("No solutions, around walls......");		// ������ (ax, ay) ��� (bx, by) - �����
			getch();
		}
	};
	
	printf("len: %d \n", grid[0][0].len);
	getch();

	

	return 0;
}
