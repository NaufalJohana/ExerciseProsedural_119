#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata, double nil){
	if (rata >= 70 || nil >= 80)
		return "asroni lulus";
	else
		return "asroni gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Lia lulus";
	else
	return "Lia gagal";
}


string status3(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "joko lulus";
	else
		return "joko gagal";
}


int main() {
	double nilM, nilB;
	cout << "Masukan nilai matematika = ";
	cin >> nilM;
		cout << "Masukan nilai bahasa inggris = ";
	cin >> nilB;
		cout << "Status Kelulusan = " << status(rerata(nilM, nilB);
	return 0;
}

