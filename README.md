# Experiment 6
# Aim
To study and implement C++ decision making statements loops.

# Software
Visual Studio Code

# Theory
Loops are a fundamental part of programming which allow a block of code to iterate on basis of some given conditions. The types of loops are:

1] For loop: 
It is used when we know how many times we want a block of code to be executed. It consists of three parts- initialization, condition, increment/ decrement.

2] While loops:
While loop is used when we do not know how many times we want the block of code to executed. It continues to be executed as long as the given condition holds to be true. The condition is checked before the code is executed.

3] Do While loop:
It is similar to the while loop, but it checks the condition after the code is executed. Hence the code is executed at least once.

4]Nested Loops:
Nested loops are loops inside a loop. They are used in multidimensional arrays or creating patterns.

CODE:

For loop

```
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<20;i++){
        cout<<i<<endl;
    }
}
```
O/P:

![image](https://github.com/user-attachments/assets/63d55fd0-42ac-4dfb-a369-5567f146431b)


While Loop

```
#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<10){
        cout<<i<<endl;
        i++;
    }
}
```
O/P:

![image](https://github.com/user-attachments/assets/fcbc3c2e-05d5-41a8-8971-3918f10bc539)


Do While Loop
```
#include<iostream>
using namespace std;
int main(){
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }
        while(i<10);
        return 0;     
}
```
O/P:

![image](https://github.com/user-attachments/assets/642357f0-38bd-44d9-90ca-e93704a080f8)


Nested For 
```
#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=10; i++) {
        for (int j=1;j<=10;j++) {
            cout <<i*j<<"\t"; 
        }
        cout << endl;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/eacd78a1-c946-4b44-9e9e-25a5502255d5)


Nested While
```
#include <iostream>
using namespace std;

int main() {
    int i=1;
    while (i<=10) {
        int j=1;  
        while (j<=10) {
            cout<<i*j<<"\t"; 
            j++;
        }
        cout<<endl; 
        i++;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/043c91ef-2f9d-46b0-b1f6-9247ce811c40)


Nested Do While
```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j=1;
        do {
            cout<<i * j<< "\t"; 
            j++;
        } while (j<=10);
        cout<<endl; 
        i++;
    } while (i<=10);
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/cf959571-48d2-4d72-a84a-503171da04cb)


For loop inside while loop:
```
#include <iostream>
using namespace std;
int main() {
    int i=1;
    while (i<=5) {
        for (int j=1; j<=5; j++) {
            cout << i*j <<"\t"; 
        }
        cout << endl; 
        i++;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/a02f709b-64da-4bc9-9a86-37b10ed89141)


While loop inside for loop:
```
#include <iostream>
using namespace std;

int main() {
    
    for (int i=1; i<=5; i++) {
        int j=1;

        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl; 
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/215ccd00-d700-4a00-bbf5-10188ba097df)

```
#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
        cout<<"  ";
    }
    while(k!=(2*i-1)){
        cout<<"* ";
        k++;
    }
    k=0;
    cout<<endl;
}
cout<<endl;
    }
```
O/P:

![image](https://github.com/user-attachments/assets/266eb5a2-1467-486f-b81f-53c86c511a8f)


# Concluison 

In this experiment we used the different loops and their nested combinations, which are essential for programming and managing complex iterations. For loops are ideal for known iterations, whileloops for condition basis and do while for executing the code at least once.
