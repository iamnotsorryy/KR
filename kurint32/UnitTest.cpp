/**
* @file UnitTest.cpp
* @author Кабанов Д.А
* @version 1.0
* @brief Модульное тестирование
* @date 23.06.2023
* @copyright ИБСТ ПГУ
*/

#include <UnitTest++/UnitTest++.h>
#include "server.hpp"
#include "server.cpp"
#include "errorhandler.hpp"
#include "errorhandler.cpp"
#include "getdata.hpp"
#include "getdata.cpp"
#include "md5hash.hpp"
#include "md5hash.cpp"

using namespace std;
struct things_fixture{
 server * pointer;
 things_fixture(){
 pointer = new server();
 }
 ~things_fixture(){
 delete pointer;
 }
};

/**
* @brief Юнит тесты
*/

SUITE(PROVERKI)
{
	/**
	* @brief Успешный сценарий
	* @code 
	TEST_FIXTURE(things_fixture, no_error_file){
	pointer->error_name =
	"error.txt";
	pointer->data_name =
	"base.txt.txt";
	CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
	log_name);
		}
	* @endcode
	*/
	
 TEST_FIXTURE(things_fixture, no_error_file){
 pointer->error_name =
"error.txt";
 pointer->data_name =
"base.txt.txt";
 CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
 log_name);
 	}
	
	/**
	* @brief Неверно введен файл БД
	* @param base2.txt Неверный файл БД
	
	* @code 
	TEST_FIXTURE(things_fixture, no_base_file){
	pointer->log_name="error.txt";
	pointer->data_name="base2.txt";
	CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
	log_name);
		}	
	* @endcode
	*/
	
 TEST_FIXTURE(things_fixture, no_base_file){
 pointer->log_name="error.txt";
 pointer->data_name="base2.txt";
 CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
 log_name);
	}
	
	/**
	* @brief Отсутствует  пользователь в БЗ
	* @code
	TEST_FIXTURE(things_fixture, no_user){
	pointer->log_name="error.txt";
	pointer->data_name="data_no_user.txt";
	CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
	log_name);
	* @endcode
	*/
	
 TEST_FIXTURE(things_fixture, no_user){
 pointer->log_name="error.txt";
 pointer->data_name="data_no_user.txt";
 CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
 log_name);
	}
	
	/**
	* @brief Отсутствует пароль в БД
	* @code  
	TEST_FIXTURE(things_fixture, no_password){
	pointer->log_name="error.txt";
	pointer->data_name="data_no_password.txt";
	CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
	log_name);
		}
	* @endcode
	*/
	
 TEST_FIXTURE(things_fixture, no_password){
 pointer->log_name="error.txt";
 pointer->data_name="data_no_password.txt";
 CHECK_THROW(pointer->Server.self_addr(data_name, 33333,
 log_name);
	}

}
