#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	double q1, q2;
	double myRandomNumber, inside;
	srand((int)time(NULL)); //thanks to that we get a uniqe seed each time
	double r = 1; //that can be changed
	double N, x, y;
	cout << "Number of iterations = ";
	cin >> N;
	inside = 0;
	for (int i = 0; i < N; i++)
	{
		q1 = static_cast <double> (rand());
		q1 = q1 / static_cast <double> (RAND_MAX);
		q2 = static_cast <double> (rand());
		q2 = q2 / static_cast <double> (RAND_MAX);
		x = 2 * q1;
		y = 2 * q2;
		//let's check if our random point (x,y) is inside the circle
		if (((x-r)*(x-r) + (y-r)*(y-r)) <= (r * r))
		{
			inside++;
		}
	}
	cout << inside << "\n";
	//through quick maths you can check that the ratio is pi/4
	double pi = 4 * (inside / N);
	cout << "pi is approx. = " << pi; //the error usually around 0.7% with 10 000 iterations
}

