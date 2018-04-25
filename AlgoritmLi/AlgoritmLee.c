#include <stdio.h>
//#define N 3
//#define M 3
// Ѕрижак јндрей  ƒ« к курсу јлгоритмы и структуры данных. «адача 1.
//1.  оличество маршрутов с преп€тстви€ми.–еализовать чтение массива с преп€тствием и
//нахождение количество маршрутов.
//Ќапример, карта:
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

//#define  W = 3         // ширина рабочего пол€
//#define H = 3         // высота рабочего пол€
//#define WALL = -1         // непроходима€ €чейка
//#define BLANK =0        // свободна€ непомеченна€ €чейка
//#define START = 0

/*const*/ int W = 3;
/*const*/ int H = 3;
/*const*/ int WALL = -1;
/*const*/ int BLANK = 0;
/*const*/ int MARKED = 1;

struct  Cell    //создаем структуру клетка
{
	int x;    // координаты €чейки по горизонтали
	int y;		// координаты €чейки по вертикали
	int len;   // длина пути от старта до финиша
	int state; // состо€ние  
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
	for ( i = 0; i < W-1; i++)			//присваиваем все клеткам статус непомеченные
	{
		for ( j = 0; j < H-1; j++)
		{
			grid[i][j].state = BLANK;
		}
	}
	// обозначаем стены
	grid[0][1].state  = WALL;
	grid[0][2].state = WALL;
	grid[2][1].state = WALL;
	grid[0][1].state = WALL;

	

	//grid[2][2].state = -10;   //финишна€  €чейка
	if (grid[0][0].state == WALL || grid[2][2].state == WALL)
	{
		printf("No solutions, around walls......");		// €чейка (ax, ay) или (bx, by) - стена
		getch();
	}
	else
	{
		//int dx[4] = { 1, 0, -1, 0 };   // смещени€, соответствующие сосед€м €чейки
		//int dy[4] = { 0, 1, 0, -1 };   // справа, снизу, слева и сверху
		//int d, x, y, k;

		//d = 0;
		//grid[0][0].state = 0;   //стартова€ €чейка
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
		//				for (k = 0; k < 4; ++k)                    // проходим по всем непомеченным сосед€м
		//				{
		//					int iy = y + dy[k], ix = x + dx[k];
		//					if (iy >= 0 && iy < H && ix >= 0 && ix < W &&
		//						grid[iy][ix].state == BLANK)
		//					{
		//						stop = 0;              // найдены непомеченные клетки
		//						grid[iy][ix].len = d + 1;      // распростран€ем волну
		//						grid[iy][ix].state = MARKED;
		//					}
		//				}
		//			}
		//		}
		//	}
		//		d++;
		//} 
		//while (grid[2][2].len != BLANK && stop!=1);



		if (grid[2][2].state == BLANK)   // путь не найден до финишной точки не найден
		{
			printf("No solutions, around walls......");		// €чейка (ax, ay) или (bx, by) - стена
			getch();
		}
	};
	
	printf("len: %d \n", grid[0][0].len);
	getch();

	

	return 0;
}
