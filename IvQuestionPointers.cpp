#include <iostream>;

using namespace std;


int main() {
	
	
	
	int a[5], *p, z;
	
	for(int i = 0; i < 5; i++)
		a[i] = i*i;                // poinyrt mrmoty yablosu çiz 
									// sýralý bir þekilde a[0] = 0 memort de 1000 mesela 
									//ve a[1} = 1 memoryde 10001 ve a[2] 4 oluyor 10002 oluyor diyelim
		
		
	p = a;
	z= *(p +1) +*(a + 2); // burada p = a ve a 0 olduðu için pointer 0 oluyor , 0+1 , 
						  //  diðeride a nýn pointeri 1000 + 2 den 1002 de mrmou fr 4 tü 1+ 4 ten 5 olur
		
	cout << z;
	
}
