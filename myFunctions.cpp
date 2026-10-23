/*

* Author: Jadyn Leonard

* Assignment Title: myFunctions.cpp

* Assignment Description: Example

* Due Date:10/21/2026

* Date Created:10/21/2026

* Date Last Modified:10/21/2026

*/

int max ( int a, int b){
    int maxValue;
    
    if (a > b) {
        maxValue = a;
    }
    else {
        maxValue = b;
    }
    
    return maxValue;
}

double max (double a, double b){
    double maxValue;
    if (a > b){
        maxValue = a;
    }
    else{
        maxValue = b;
    }
    return maxValue;
}

int max (int m[], int n){
    int maxValue = m[0];
    
    for (int i = 0; i < n; i++){
        if (m[i] > maxValue){
            maxValue = m[i];
        }
    }
    
    return maxValue;
}

double max (double m[ ], int n){
    double maxValue = m[0];
    
    for (int i = 0; i < n; i++){
        if (m[i] > maxValue){
            maxValue = m[i];
        }
    }
    return maxValue;
}

int min ( int a, int b){
    int minValue;
    
    if(a < b){
        minValue = a;
    }
    else{
        minValue = b;
    }
    return minValue;
}

double min (double a, double b){
    double minValue;
    
    if(a < b){
        minValue = a;
    }
    else{
        minValue = b;
    }
    return minValue;
}

int min (int m[ ], int n){
    int minValue = m[0];
    
    for (int i = 0; i < n; i++){
        if (m[i] < minValue){
            minValue = m[i];
        }
    }
    return minValue;
}

double min (double m[ ], int n){
    double minValue = m[0];
    
    for (int i = 0; i < n; i++){
        if (m[i] < minValue){
            minValue = m[i];
        }
    }
    return minValue;
}

int absoluteValue (int a){
    int absValue;
    if (a < 0){
        absValue = a * -1;
    }
    else{
        absValue = a;
    }
    return absValue;
}

double absoluteValue (double a){
    double absValue;
    if (a < 0){
        absValue = a * -1;
    }
    else{
        absValue = a;
    }
    return absValue;
}

double factorial(int a){
    double factor;
    
    if (a < 0){
        factor = 0;
    }
    else if (a == 0 || a == 1){
        factor = 1;
    }
    else {
        factor = 1;
        for (int i = 1; i <= a; i++){
            factor = factor * i;
        }
    }
    
    return factor;
}

double combination(int M, int N){
    double combFactorial;
    
    if (N < 0 || N > M){
        combFactorial = 0;
    }
    else {
        double aFactorial = factorial(M);
        double bFactorial = factorial(N);
        double subABFactorial = factorial(M - N);
        
        combFactorial = aFactorial / (bFactorial * subABFactorial);
    }
    
    return combFactorial;
}

double permutation(int M, int N){
    double permFactorial;
    
    if (N < 0 || N > M){
        permFactorial = 0;
    }
    else {
        double aFactorial = factorial(M);
        double subABFactorial = factorial(M - N);
        
        permFactorial = aFactorial / subABFactorial;
    }
    
    return permFactorial;
}
