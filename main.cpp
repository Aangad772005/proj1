#include <iostream>

void printMenu(){
        std::cout << "============================" << std::endl;
        //1 print help
        std::cout << "1: Help & Info" << std::endl;
        //2 print exchange rates
        std::cout << "2: Real-Time Exchange Rates" << std::endl;
        //3 make an offer
        std::cout << "3: Make an Offer" << std::endl;
        //4 make a bid
        std::cout << "4: Make a Bid" << std::endl;
        //5 print wallet
        std::cout << "5: Your Wallet" << std::endl;
        //6 continue
        std::cout << "6: Continue" << std::endl;
        std::cout << "============================" << std::endl;
}

int getUserOption(){
        // prompt to select an option
        std::cout << "Choose an Option from 1-6: " << std::endl;
        int userOption;
        std::cin >> userOption;
        std::cout<<"You chose: "<<userOption<<std::endl;
        return userOption;
}

void processUserOption(){
        int userOption;
        if (userOption==1){
            std::cout << "============================" << std::endl;
            std::cout << "Help & Info" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "Welcome to the Crypto Trading Platform!" << std::endl;
            std::cout << "This platform enables you to:" << std::endl;
            std::cout << "1. Analyze the crypto market - Access real-time data to understand market trends and make informed decisions." << std::endl;
            std::cout << "2. Execute trades - Buy (make a bid) and sell (make an offer) cryptocurrencies with ease." << std::endl;
            std::cout << "3. Manage your portfolio - Keep track of your crypto holdings, monitor their performance." << std::endl;
            std::cout << "============================" << std::endl;
        }

        else if (userOption==2){
            std::cout << "============================" << std::endl;
            std::cout << "Real-Time Exchange Rates" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "This feature provides the real-time exchange rates for various cryptocurrencies." << std::endl;
            std::cout << "Use this information to stay updated with market movements, compare rates, and make informed trading decisions." << std::endl;
            std::cout << "Fetching current exchange rates from the market..." << std::endl;
            // add shit
            std::cout << "============================" << std::endl;
        }

        else if (userOption==3){
            std::cout << "============================" << std::endl;
            std::cout << "Make an Offer" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "This feature allows you to place a sell order for a cryptocurrency." << std::endl;
            std::cout << "You can specify the amount of cryptocurrency you want to sell from your wallet and the price at which you want to sell it." << std::endl;
            std::cout << "By creating an offer, you can set your own selling conditions and wait for a buyer to match your offer." << std::endl;
            std::cout << "Please enter the details of the offer you wish to make:" << std::endl;
            // add shit
            std::cout << "============================" << std::endl;
        }

        else if (userOption==4){
            std::cout << "============================" << std::endl;
            std::cout << "Make a Bid" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "This feature allows you to place a buy order for a cryptocurrency." << std::endl; //maybe add p2p
            std::cout << "You can specify the amount of cryptocurrency you want to buy and the price you are willing to pay." << std::endl;
            std::cout << "By creating a bid, you can set your desired purchase conditions and wait for a seller to match your bid." << std::endl;
            std::cout << "Please enter the details of the bid you wish to place:" << std::endl;
            //add shit
            std::cout << "============================" << std::endl;
        }

        else if (userOption==5){
            std::cout << "============================" << std::endl;
            std::cout << "Your Wallet" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "You can view the amount of each cryptocurrency you hold, including Bitcoin, Ethereum, and others." << std::endl;
            std::cout << "Monitoring your wallet allows you to track your investments and assess your overall portfolio performance." << std::endl;
            std::cout << "Fetching wallet balances..." << std::endl;
            //again adds shit
            std::cout << "============================" << std::endl;
        }

        else if (userOption==6){
            std::cout << "============================" << std::endl;
            std::cout << "Continue" << std::endl;
            std::cout << "============================" << std::endl;
            std::cout << "This option allows you to proceed to the next step or refresh the current data." << std::endl;
            std::cout << "Proceeding to the next step or refreshing the data..." << std::endl;
            std::cout << "============================" << std::endl;
        }
        else{
            std::cout << "============================" << std::endl;
            std::cout << "Choose a Valid Option from 1-6: " << std::endl;
            std::cout << "============================" << std::endl;
        }

}

int main(){

    while(true){
        printMenu();
        int userOption=getUserOption();
        processUserOption();  
    }
    return 0;
}