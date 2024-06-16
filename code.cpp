#include <iostream>
using namespace std;

// Square Pattern Questions
void squarePattern( int n){
    for(int i=0;i< n; i++){
        for(int i=0; i< n; i++){
            cout<< "* " ;
        }
        cout<< endl;
    }
}

// Rectangle Pattern Questions
void rectanglePattern( int length, int width){
    for(int i=0;i< length;i++){
        for(int j=0;j< width;j++){
            cout<< "* ";
        }
        cout<< endl;
    }
}

// Hollow Reactangle Pattern Question 

void hollowRectanglePattern(int length, int width){

    // Method 1

    cout << "Method 1"<< endl;
    for( int row =0; row < length ;row++){
        for(int col = 0; col < width; col++ ){
            if(row == 0 || row == length-1){
                cout << "* ";
            }
            else if( col == 0 ||  col == width -1){
                cout << "* ";
            }
            else{
                cout<< "  ";
            }
        }
        cout << endl;
    }

    // Method 2 

    cout << "Method 2 " << endl;

    for(int row = 0; row < length; row++){
        for(int col = 0; col < width ; col++){
            if(row ==0 || row == length-1 || col == 0|| col == width -1){
                cout<< "* ";
            }else{
                cout<< "  ";
            }
        }
        cout << endl;
    }
}

// Hollow Square Pattern Question

void hollowSquarePattern( int n){

    cout << "Method 1" << endl;

    // Method 1 
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if( row ==0 || row == n-1){
                cout << "* ";
            }
            else if( col == 0 || col == n-1){
                cout << "* ";
            }
            else cout<< "  ";
        }
        cout << endl;
    }

    // Method 2 

    cout << "Method 2 " << endl;

    for(int row = 0; row < n ; row++){
        for(int col = 0; col < n ; col++){
            if(row ==0 || row == n-1 || col == 0 || col == n-1){
                cout<< "* ";
            }else cout<< "  ";
        }
        cout << endl;
    }
}

// Half Pyramid Question

void halfPyramid( int n){
    for( int row = 0; row < n ;row++){
        for(int col = 0; col < row +1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

// Inverted Half Pyramid Question

void invertedHalfPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

// Hallow Pyramid Pattern Question

void hallowPyramid ( int n){
        
        cout<< "Method 1"<< endl;
    
    
    // Method 1
    for( int row = 0; row < n; row++){
        int totalColumn = row +1;
        for(int col = 0; col < totalColumn; col++){
            if( row == 0  || row == 1|| row == n-1 || col == 0 || row == col ){
                cout << "* ";
            }else cout<< "  ";
        }
        cout << endl;

    }

    cout << "Method 2" << endl;

    // Method 2
    for ( int row = 0; row < n ;row++){
        int totalcolumn = row +1;
        for ( int col = 0; col < totalcolumn; col++ ){
            if(row ==0 || row == n-1){
                cout <<"* ";
            }else if( col == 0 || col == totalcolumn -1){
                cout << "* ";
            }
            else cout<< "  ";
        }
        cout  << endl;
    }


}

// Inverted Hallow Pyramid Questions
void invertedHallowPyramid( int n){
     
}
int main(){

    // cout << "Hello World" << endl;
    // squarePattern(5);
    // rectanglePattern(8,4);
    // hollowRectanglePattern(3,8);
    // hollowSquarePattern(5);
    // halfPyramid(10);
    // invertedHalfPyramid(6);
    // hallowPyramid(10);
    return 0;
}