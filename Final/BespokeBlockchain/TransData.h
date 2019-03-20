public class TransData{

public:
	TransData(double amount, string srcKey, string destKey, time_t timestamp);

private:
	double amnt;
	string src;
	string dest;
	time_t time;
}
