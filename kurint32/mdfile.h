/**
* @file mdfile.hpp
* @author Кабанов Д.А
* @version 1.0
* @brief Класс, управляющий работой сервера
* @date 23.06.2023
* @copyright ИБСТ ПГУ
*/

#include <netinet/in.h>
#include <iostream>
#include <cassert>
#include <arpa/inet.h>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <fstream>
#include <sstream>
#include <string>
#include <cryptopp/cryptlib.h>
#include <iostream>
#include <vector>
#include <getopt.h>
#include <cryptopp/hex.h> // HexEncoder
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h> // MD%, для другого алгоритма - другой заголовочный файл

using namespace CryptoPP;
using namespace std;

std::string MD(std::string sah);
void errors(std::string error, std::string name);
int er(std::string file_name, std::string file_error);

/**
	* @brief Функция отправки сообщения
	* @param work_sock Сокет
	* @param string mess сообщение
	*/
	
void msgsend(int work_sock, string mess);

/**
	* @brief Функция авторизации
	* @param work_sock Сокет
	*/
	
int autorized(int work_sock, string file_name, string file_error);

/**
 * @brief Класс, управляющий работой сервера
 */
 
class Server{
	
private:

public:
/**
	* @brief конструктор класса
	* @param port порт сервера
	*/
int self_addr(string error, string file_error, int port);

int client_addr(int s, string error, string file_error);
};

int math(int work_sock);


