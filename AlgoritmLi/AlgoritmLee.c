#include <stdio.h>
#include <malloc.h>

#define N 3
#define M 3
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

//struct  Cell    //������� ��������� ������
//{
//	int x;    // ���������� ������ �� �����������
//	int y;		// ���������� ������ �� ���������
//	int len;   // ����� ���� �� ������ �� ������
//	int state; // ���������  
//};

//typedef struct Cell Cell;

//void WaweLee(int path, int W, int H, int grid [W] [H])
//{
//	/*grid [current.x][current.y].len = path;
//	current*/
//
//}

int main(int argc, char * argv[]) {
	int i;
	int j;
	/*int *grid;*/
	/*grid = (int*)malloc(N*M * sizeof(int));*/
	int grid[N][M];
	for ( i = 0; i < N; i++)			//����������� ��� ������� ������ ������������
	{
		for ( j = 0; j < M; j++)
		{
			grid[i][j] = 0;
			printf("I: %d J %d Value %d\n", i, j, grid[i][j]);
			/*getch();*/
			/*grid[i][j].state = BLANK;
			grid[i][j].x = i;
			grid[i][j].y = i;
			grid[i][j].len = 0;*/
		}
	}
	printf("===================\n");
	getch();
	// ���������� �����
	grid[0][1] = -1;
	grid[0][2] = -1;
	grid[2][1] = -1;
	

	//grid[0][1].state  = WALL;
	//grid[0][2].state = WALL;
	//grid[2][1].state = WALL;
	//grid[0][1].state = WALL;

	/*Print2(3, 3, grid[N][M]);*/

	/*getch();*/
	

	//grid[2][2].state = -10;   //��������  ������
	//if (grid[0][0].state == WALL || grid[2][2].state == WALL)

	for (i = 0; i < N; i++)			//������������� ��� ��������
	{
		for (j = 0; j < M; j++)
		{
			printf("I: %d J %d Value %d\n", i, j, grid[i][j]);
		}
	}
	printf("===================\n");
	getch();

	int dx[4] = { 1, 0, -1, 0 };   // ��������, ��������������� ������� ������
	int dy[4] = { 0, 1, 0, -1 };   // ������, �����, ����� � ������
	int d, x, y, k, iy, ix;

	if (grid[0][0]== -1 || grid[2][2] == -1)
	{
		printf("No solutions, around walls......\n");		
		getch();
	}
	else
	{
		

		d = 0;
		//grid[0][0].state = 0;   //��������� ������
		//grid[0][0].len = 0;
		grid[0][0] = 0;
		int stop = 0 ;
		do 	{
			stop = 1;						// ������������, ��� ��� ��������� ������ ��� ��������
			
			for (x = 0; x < W; ++x)
			{
				for (y = 0; y < H; ++y)
				{
		//			if (grid[y][x].len == d)
					if (grid[y][x] == d)						// ������ (x, y) �������� ������ d
					{
						for (k = 0; k < 4; ++k)                    // �������� �� ���� ������������ �������
						{
							 iy = y + dy[k];
							 ix = x + dx[k];
							 printf("ix: %d iy %d  grid[ix][iy] %d\n", ix, iy, grid[ix][iy]);
							 getch();
							if (iy >= 0 && iy < H && ix >= 0 && ix < W && grid[ix][iy]/*.state*/ == BLANK)
							{
								stop = 0;              // ������� ������������ ������
		//						grid[iy][ix].len = d + 1;      // �������������� �����
								grid[ix][iy] = d + 1;      // �������������� �����
		//						grid[iy][ix].state = MARKED;
								printf("After iy: %d ix %d  grid[ix][iy] %d\n", ix, iy,  grid[ix][iy]);
								getch();

							}
						}
					}
				}
			}
		d++;
		} 
		//while (grid[2][2].len != BLANK && stop!=1);
		while (grid[2][2] != BLANK && stop!=1); // ���� �� ������
	}

		//if (grid[2][2].state == BLANK)   // ���� �� ������ �� �������� ����� 
		if (grid[2][2] == BLANK)   // ���� �� ������ �� �������� ����� 
		{
			printf("No solutions.....\n");		
			getch();
		}
	//};
	//
		for (i = 0; i < N; i++)			//������������� ��� ��������
		{
			for (j = 0; j < M; j++)
			{
				printf("I: %d J %d Value %d\n", i, j, grid[i][j]);
			}
		}
		printf("===================\n");
		getch();
	//printf("len: %d \n", grid[0][0].len);
	printf("len: %d \n", grid[2][2]);
	getch();

	

	return 0;
}
