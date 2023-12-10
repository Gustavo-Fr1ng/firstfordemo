#include<iostream>
#include<chrono>

using namespace std;

int main()		{
    // Record the start time
    auto start = chrono::high_resolution_clock::now();

    cout << "Hello World !" << endl;
    cout << "Hello World !" << endl;

    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate the duration in microseconds
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    // Output the duration
    cout << endl << "Time taken by Program: " << duration.count() << " microseconds" << endl;

    return 0;
}