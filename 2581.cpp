#include<iostream>
#include<math.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m = 0, n = 0, sum = 0, min = 0; //m, n의 범위는 1만 이하의 자연수
	bool arr[10001] = { 0,1,0 }; //편의상 원하는 수를 인덱스에 집어넣어서 바로 알 수 있게 하기 위해서 10001칸 선언
	//인덱스가 1로 체크된 것은 소수가 아닌 것으로 판단
	//0인덱스엔 0, 1인덱스엔 1, 2인덱스엔 0, 그 이후로 전부 0
	cin >> m >> n;
	int sqr = sqrt(n); //sqrt(n)을 for문에 바로 넣으면 시간이 오래 걸리므로 따로 변수 선언하여 값을 저장해서 사용
	 //루트n까지 반복하면 그 뒤는 이미 앞에서 처리된 내용이므로 루트n까지 반복
	for (int i = 2; i <= sqr; ++i) { //2의 배수부터 처리해야되므로 i는 2부터 시작
		if (arr[i] == 0) { //인덱스가 0일 때
			for (int j = i * 2; j <= 10000; j += i) { //자기자신은 제외->i*2부터 시작
				arr[j] = 1; //j는 1로 만들 arr의 인덱스이자 우리가 파악할 수의 최대 범위의 값.
			} //j에 매 사이클마다 i를 더함으로써 배수를 나타내므로 j+=i
		}
	}//=> 에라토스테네스의 체 알고리즘
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) { //인덱스가 0이고
			if (sum == 0) { //합이 0, 즉 가장 먼저 소수로 판단된 값이 소수 중 최솟값
				min = i;
			}
			sum += i;
		}
	}
	if (sum == 0) {
		cout << "-1";
	}
	else {
		cout << sum << '\n' << min;
	}
}