// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

//int kub(int a)
//{
//	return a*a*a;
//}

//int qwe(int a, int b, int c) 
//{
//	if ((a > b) && (a > c)) return a; 
//	else if ((b > a) && (b > c)) return b; 
//	else return c;
//}

//int sum_arr(int a[], int size) {
//	int sum = 1;
//	for (int i = 0;  i < size;  i++)
//	{
//		sum *= a[i];
//	}
//
//	return sum;
//}

//void fill_arr(int a[], int size) 
//{
//
//	srand(time(NULL));
//
//	for (int i = 0; i < size; i++)
//	{
//		a[i] = rand() % 10 + 1;
//	}
//
//
//}
//
//void print_arr(int a[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}

//bool fx(int a) {
//	if (a/ == 0) return true;
//	else return false;
//}

//bool prime(int x)
//{
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return false;
//
//	}
//	return true;
//}



//bool sb(int a) 
//{
//	int x;
//	int sum=0, sum1=0;
//	if (a < 100000 && a>999999) return false; else {
//		for (int i = 0; i <= 5; i++)
//		{
//			x = a % 10;
//			a = a / 10;
//			if (i <= 2) sum += x; else sum1 += x;
//		}
//		if (sum == sum1) return true; else return false;
//	}
//}

//int arr_x(int a[], int size) {
//
//	int max = INT_MIN;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] > max) max = a[i];
//	}
//	
//	return max;
//}

int arr_z(int a[], int b[], int c[], int size) {

}

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a[] = {1,2,3,4,12,6,7,8};

	/*cout << arr_x(a, 8) << endl;*/
	
	/*cout << sb(a) << endl;*/

	//int a, b;
	//cin >> a >> b;

	//poisk_soversh(a, b);
	//int a[10];
	//int b[3] = { 25,21,56 };
	/*int a = 7;
	cin >> a;

	cout << prime(a) << endl;*/


	

	/*fill_arr(a, 10);
	print_arr(a, 10);
	print_arr(b, 3);*/

	/*cout << sum_arr(a, 5) << endl;
	cout << sum_arr(b, 3) << endl;*/
	
	//int a = -5, b = 3, c = -4, d = 5;
	//cout << qwe(a, b, c) << endl;
	//cout << plust(b, c) << endl;
	//cout << plust(a, c) << endl;
	//cout << kub(a) << endl;
	//cout << kub(b) << endl;
	//cout << kub(c) << endl;
	//cout << kub(d) << endl;

	return 0;
}

