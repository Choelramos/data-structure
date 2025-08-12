/* Primeiras linhas para evitar que as definições da classe Time ocorram múltiplas
vezes. Ocorrerá se tiver mais de der mais de dois includes em "time.h".
*/

#ifndef TIME_H // Incluir apenas se TIME_H não estiver definido
#define TIME_H /* Define este bloco  para que não inclua mais de uma vez */

class Time {
    private: // seção privada
    int hour; // 0 - 23
    int minute; // 0 - 59
    int second; // 0 - 59


    public:
        Time(int hour = 0, int minute = 0, int second = 0);
        int getHour() const;
	void setHour(int hour);
	int getMinute() const;
	void setMinute(int minute);
	int getSecond() const;
	void setSecond(int second);
	void print() const;
	void nextSecond();
};

#endif // final do bloco "#ifndef"
