#include <bits/stdc++.h>
using namespace std;

	int escompuesto (int x){
		if ( x<= 3) return 0;
		for (int i=2; i*i <= x; i++){
			if ( x % i == 0) return 1;
		}
		return 0;
	}
int main() {
	
}
} 
