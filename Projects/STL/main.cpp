#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class BigInt{
public:
    BigInt(){
        storage.push_back(0);
    }

    BigInt(string n){
        int len = (int)n.length() - 1;
        for(int i = len; i >= 0; i--){
            storage.push_back(n[i] - '0');
        }
    }

    BigInt(int n){
        while(n > 9){
            int number = n % 10;
            storage.push_back(number);
            n = n / 10;
        }
        storage.push_back(n);
    }

    void print() {
        vector<char>::reverse_iterator it;
        for(it = storage.rbegin(); it != storage.rend(); it++){
            cout <<(int)*it<< "";
        }
        cout << endl;
    }

    BigInt operator-(int num){
        BigInt bigInt(num);
        BigInt temp(*this);
        int len = (int)temp.storage.size();
        int len2 = (int)bigInt.storage.size();
        int size;

        if(len > len2){
            size = len - len2;
            for(int i = 0; i < size; i++){
                bigInt.storage.push_back(0);
            }
        }
        else if(len < len2){
            size = len2 - len;
            for(int i = 0; i < size; i++){
                temp.storage.push_back(0);
            }
        }

        for(int i = 0; i < bigInt.storage.size(); i++){
            if(i == bigInt.storage.size() - 1 && temp.storage[i] == 0 && bigInt.storage[i] == 0){
                temp.storage.erase(temp.storage.end() - 1);
                break;
            }
            temp.storage[i] = temp.storage[i] - bigInt.storage[i];

            if(temp.storage[i] < 0){
                temp.storage[i] = temp.storage[i] + 10;
                temp.storage[i + 1] = temp.storage[i + 1] - 1;
            }
        }
        return temp;

    }

    BigInt operator+(BigInt num){ //similar to -
        BigInt temp(*this);
        int len = (int)temp.storage.size();
        int len2 = (int)num.storage.size();
        int size;

        if(len > len2){
            size = len - len2;
            for(int i = 0; i < size; i++){
                num.storage.push_back(0);
            }
        }
        else if(len < len2){
            size = len2 - len;
            for(int i = 0; i < size; i++){
                temp.storage.push_back(0);
            }
        }
        for(int i = 0; i < num.storage.size(); i++){
            temp.storage[i] = temp.storage[i] + num.storage[i];
            if(temp.storage[i] > 9){
                if(i == num.storage.size() - 1){
                    temp.storage[i] = temp.storage[i] - 10;
                    temp.storage.push_back(1);
                }
                else{
                    temp.storage[i] = temp.storage[i] - 10;
                    temp.storage[i + 1] = temp.storage[i + 1] + 1;
                }
            }
        }
        return temp;

    }

    bool operator==(BigInt bigInt){
        int len = (int)this->storage.size();
        int len2 = (int)bigInt.storage.size();

        if(len != len2){
            return false;
        }
        else{
            for(int i = len - 1; i>=0; i--){
                if(storage[i] != bigInt.storage[i]){
                    return false;
                }
            }
            return true;
        }
    }

    bool operator<(const BigInt &bigInt)const{
        int len = (int)this->storage.size();
        int len2 = (int)bigInt.storage.size();
        BigInt temp = *this;

        if(len < len2){
            return true;
        }
        else if(len > len2){
            return false;
        }
        else if(len == len2){
            for(int i = (int)temp.storage.size()-1; i>=0; i--){
                if(temp.storage[i] < bigInt.storage[i]){
                    return true;
                }
                else if(temp.storage[i] > bigInt.storage[i]){
                    return false;
                }
            }
        }
        return false;
    }

    bool operator<=(int number){

        BigInt temp(number);

        if(*this == temp){
            return true;
        }
        else{
            return *this < temp;
        }
    }

    BigInt operator ++(int){
        return *this = *this + 1;
    }

    friend ostream &operator <<(ostream &out, const BigInt& bigInt){
        string length = to_string((int)bigInt.storage.size());
        BigInt temp(bigInt);
        string empty_string = " ";
        int maxValue = INT_MAX;

        int index = (int)bigInt.storage.size() - 1;
        int count = 0;
        if(!(temp <= maxValue)){
            empty_string = to_string(bigInt.storage[index]);
            empty_string = empty_string + ".";
            while(count < 10){
                index--;
                empty_string = empty_string + to_string(bigInt.storage[index]);
                count++;
            }
            empty_string = empty_string + "e" + length;
            out << empty_string;
        }
        else{
            for(int i = (int)bigInt.storage.size()-1; i>=0; i--){
                out << to_string(bigInt.storage[i]);
            }
        }
        return out;
    }

private:
    vector<char> storage;
};


int goldRabbits(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        int result = goldRabbits(n - 1) + goldRabbits(n - 2);
        if(result < 0){  // overflows if negative
            throw string(" Overflow Error, goldRabbits overflowed using " + to_string(n));
        }
        return result;
    }
}


BigInt goldRabbits(BigInt n) { // recursion using BIgINt
    static map<BigInt, BigInt> Map;

    if (Map.find(n) != Map.end()) {
        return Map.find(n)->second;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        BigInt sum = goldRabbits(n - 1) + goldRabbits(n - 2);
        Map.insert({n, sum});
    }
    return Map[n];
}

void pause(){
    cout << "Press Enter to continue..."<<endl;
    getchar();
}

int main() {
    cout <<"Checking if code works : "<< goldRabbits(BigInt(3000))<<endl;   // <----- add this line

    BigInt b1("123456789123456789123456789123456789");
    BigInt b2(b1);
    BigInt max(INT_MAX);

    cout << "B1:"<< b1 << "\nB2:" << b2 << "\nMAX:" << max << endl;
    pause();
    cout << "\nB1:";
    b1.print();
    cout << endl;
    pause();

    for(BigInt i = 0; i <= 3000; i++){
        cout << "\ngoldRabbits("<< i <<") = " << goldRabbits(i);
    }
    cout << endl;
    pause();

    cout<< "\nThis is the value of goldRabbits(3000)\n\n";
    BigInt gR3000 =  goldRabbits(BigInt(3000));
    gR3000.print();

    pause();

    int n = 500;
    try{
        cout << "The value of goldRabbits(500) is:" << goldRabbits(n) << endl;
    }
    catch(string error){
        cout << error << endl;
        cout << "Transitioning to BigInt\n";
        cout << goldRabbits(BigInt(n));
    }

    pause();
}