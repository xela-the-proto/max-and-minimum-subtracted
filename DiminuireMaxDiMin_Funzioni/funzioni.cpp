
/*
void diminuireMaxDiMin(int *pNum1, int *pNum2, int *pNum3)
{
    int *pMin;
    int *pMax;

    pMin=pNum1;
    pMax=pNum1;

    if(*pNum2<*pMin)
        pMin=pNum2;
    if(*pNum3<*pMin)
        pMin=pNum3;

    if(*pNum2>*pMax)
        pMax=pNum2;
    if(*pNum3>*pMax)
        pMax=pNum3;

    *pMax=*pMax-*pMin;
}
*/

void diminuireMaxDiMin(int *pNum1, int *pNum2, int *pNum3)
{
    int min;
    int *pMax;

    min=*pNum1;
    pMax=pNum1;

    if(*pNum2<min)
        min=*pNum2;
    if(*pNum3<min)
        min=*pNum3;

    if(*pNum2>*pMax)
        pMax=pNum2;
    if(*pNum3>*pMax)
        pMax=pNum3;

    *pMax-=min;
}


