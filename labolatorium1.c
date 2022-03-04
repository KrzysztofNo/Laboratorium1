#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={2,3,5,2,4,1,4,9,1,4,2}; //pesel wymyslony, tworzymy tablice i podajemy jej zawartoœæ
    selectionSort(array); //sortowanie tablicy
    for(int a=0;a<11;a++)
    {
        printf("%d", array[a]); //drukuje element
    }
}
void selectionSort(int array[])
{
    for(int b=0;b<10;b++) //liczba 10 to dlugosc tablicy, dlatego,¿e ostatni wyraz zosta³ ju¿ posortowany
    {
        int min=b;
        for(int c=b+1;c<11;c++) //11 elementowa tablica
        {
        if(array[min]>array[c]){
                min=c;
        }
        }
    int temp=array[b]; //przypisuje pierwszy element do zmiennej temp
    array[b]=array[min]; //zapisuje najmniejszy element tablicy na miejscu pierwszym
    array[min]=temp; //zapisuje poprzedni element na miejscu najmniejszego elementu
    }
}
