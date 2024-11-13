#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    cout << (c * e - b * f) / (a * e - b * d) << ' ' << (c * d - a * f) / (b * d - a * e);
    
    return 0;
}

// 여러 방법이 있다
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int a, b, c, d, e, f;
//     cin >> a >> b >> c >> d >> e >> f;

//     int x, y;
//     x = a + d;
//     y = b + e;


// 	for (int x = -999; x <= 999; x++)
// 	{
// 		for (int y = -999; y <= 999; y++)
// 		{
// 			if ((a * x + b * y == c) && (d * x + e * y == f))
// 			{
// 				cout << x << " " << y;
// 				break;
// 			}
// 		}
// 	}
    
//     return 0;
// }
