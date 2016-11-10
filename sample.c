/*                                      */
/*  データの扱い方  サンプルプログラム  */
/*                                      */

#include <stdio.h>

int main(void)
{
	char	moji = 'H';	/* mojiを文字型で宣言し、'H'で初期化	*/
	int	cnt = 5;	/* cntを整数型で宣言し、5で初期化	*/
	long	goukei;		/* goukeiを倍長整数型で宣言		*/
	float	x,y;		/* xとyを単精度浮動小数点型で宣言	*/
	double	z;		/* zを倍精度浮動小数点型で宣言		*/

	x = 2.6;		/* xに2.6を代入				*/
	y = 3.8;		/* yに3.8を代入				*/

	z = x + y;		/* x + yをzに代入			*/

	goukei = 100 * cnt;	/* 100 * cnt を goukeiに代入		*/

	printf("moji = %c\n",moji);	/* moji  を出力			*/
	printf("z = %f\n",z);		/* z     を出力			*/
	printf("goukei = %ld\n",goukei);	/* goukeiを出力			*/

	return 0;
}
