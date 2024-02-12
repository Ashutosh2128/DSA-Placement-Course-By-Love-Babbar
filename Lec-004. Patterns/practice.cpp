#include <iostream>
using namespace std;

int main() {
    /*
    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {
        int j = 1;

        while(j <= n) {
            cout << n-j+1;
            j = j+1;
        }

        cout << endl;
        i = i+1;
    }
    



    int n;
    cin >> n;

    int i = 1;
    int cnt = 1;

    while(i <= n) {
        int j = 1;

        while(j <= n) {
            cout << cnt << " ";
            j = j+1;
            cnt = cnt+1;
        }

        cout << endl;
        i = i+1;
    }
    



    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout << "*" << " ";
            col = col+1;
        }

        cout << endl;
        row = row+1;
    }
    




    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout << row << " ";
            col = col+1;
        }

        cout << endl;
        row = row+1;
    }
    




    int n;
    cin >> n;

    int row = 1;
    int cnt = 1;

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout << cnt << " ";
            col = col+1;
            cnt = cnt+1;
        }

        cout << endl;
        row = row+1;
    }
    




    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;
        int cnt = row;

        while(col <= row) {
            cout << cnt << " ";
            col = col+1;
            cnt = cnt+1;
        }

        cout << endl;
        row = row+1;
    }
    




    int n;
    cin >> n;

    int row = 1;
    while(row <= n) {
        int col = 1;
        // int cnt = row;

        while(col <= row ) {
            // cout << cnt << " ";
            cout << row-col+1 << "  "; 
            col = col + 1;
            // cnt = cnt - 1;
        }
        
        cout << endl;
        row = row + 1;
    }
    




    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row <= n) {
        int col = 1;

        while(col <= n) {
            cout << ch << " ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
        ch = ch + 1;
    }
    




    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;
        char ch = 'A';

        while(col <= n) {
            cout << ch << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }
    





    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row <= n) {
        int col = 1;
        
        while(col <= n) {
            cout << ch << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }
    





    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;
        char ch = 'A';

        while(col <= n) {
            char cha = ch + row - 1;
            cout << cha << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }



    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout << ch << " ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
        ch = ch + 1;
    }





    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row <= n) {
        int col = 1;

        while(col <= row) {
            cout << ch << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }






    int n;
    cin >> n;

    int row = 1;
    

    while(row <= n) {
        int col = 1;
        char ch = 'A';

        while(col <= row) {
            char cha = ch + row - 1;
            cout << cha << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
        
    }






    int n;
    cin >> n;

    int row = 1;
    

    while(row <= n) {
        int col = 1;
        char ch = 'A' + n - row;

        while(col <= row) {
            cout << ch << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }


    int n;
    cin >> n;

    int row = 1;
    

    while(row <= n) {
        int col = 1;
        char ch = 'A' + row - 1;

        while(col <= n) {
            cout << ch << " ";
            col = col + 1;
            ch = ch + 1;
        }

        cout << endl;
        row = row + 1;
    }




    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        //print spaces
        int space = n - row;

        while(space) {
            cout << " ";
            space = space - 1;
        }

        //print star
        int col = 1;

        while(col <= row) {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;

    }



    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int col = 1;

        while(col <= n-row+1) {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }





    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        //print spaces
        int space = 0;

        while(space < row-1) {
            cout << " ";
            space = space + 1;
        }

        //print star
        int col = 1;

        while(col <= n-row+1) {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }


    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int space = 0;

        while(space < row-1) {
            cout << " ";
            space = space + 1;
        }

        int col = 1;

        while(col <= n-row+1) {
            cout << row;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }





    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int space = n-row;

        while(space) {
            cout << " ";
            space = space - 1;
        }

        int col = 1;

        while(col <= row) {
            cout << row;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }





    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        int space = 1;

        while(space <= row - 1) {
            cout << " ";
            space = space + 1;
        }

        int col = 1;
        int val = row;

        while(col <= n-row+1) {
            cout << val;
            col = col + 1;
            val = val + 1;
        }

        cout << endl;
        row = row + 1;
    }





    int n;
    cin >> n;

    int row = 1;
    int cnt = 1;

    while(row <= n) {
        int space = 1;

        while(space <= n-row) {
            cout << " ";
            space = space + 1;
        }

        int col = 1;

        while(col <= row) {
            cout << cnt;
            col = col + 1;
            cnt = cnt + 1;
        }

        cout << endl;
        row = row + 1;
    }




    int n;
    cin >> n;

    int row = 1;

    while(row <= n) {
        //spaces
        int space = 1;

        while(space <= n-row) {
            cout << " ";
            space = space + 1;
        }

        //left half
        int col = 1;

        while(col <= row) {
            cout << col;
            col = col + 1;
        }

        //right half
        int start = row - 1;

        while(start) {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        row = row + 1;
    }*/





    //Dabangg Home Work Pattern
    int n;
    cin >> n;

    int i = 0;

    while(i < n) {

        //left number
        int j = 1;

        while(j <= n-i) {
            cout << j;
            j = j + 1;
        }

        //left star
        int k = 0;

        while(k <= i-1) {
            cout << "*";
            k = k + 1;
        }

        //right star
        int l = 0;

        while(l <= i-1) {
            cout << "*";
            l = l + 1;
        }

        //right numbers
        int m = 1;
        int cnt = n-i;

        while(m <= n-i) {
            cout << cnt;
            m = m + 1;
            cnt = cnt - 1;
        }

        cout << endl;
        i = i + 1;
    }
    //Dabangg Home Work Pattern Completed Successfully🎉🎉🎉


    





    return 0;
}