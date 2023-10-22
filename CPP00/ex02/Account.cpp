#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstring>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit) {
	_displayTimestamp();
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << std::flush;
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std:: cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << std::flush;
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	std:: cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp( void ) {
	std::time_t currentTime = std::time(NULL);

	char timestamp[16];
	std::tm* localTime = std::localtime(&currentTime);

	if (localTime != NULL) {
		std::strftime(timestamp, sizeof(timestamp), "%Y%d%m_%H%M%S", localTime);
		std::cout << "[" << timestamp << "] " << std::flush;
	} else {
		std::cout << "Timestamp error" << std::endl;
	}
}



