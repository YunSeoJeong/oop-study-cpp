#include <iostream>

int accounts[100];

int main(void) {
    while(true)
    {
        std::cout << "1.계좌계설\n";
        std::cout << "2.입금\n";
        std::cout << "3.출금\n";
        std::cout << "4.전체고객 잔액조회\n";
        std::cout << "5.프로그램 종료\n";
        
        int input = 0;
        std::cin >> input;
        
        switch (input) {
            case 1:
            {
                std::cout << "고객님의 이름을 입력해주세요.\n";
                
                char name[20];
                std::cin >> name;
                
                std::cout << "계좌번호를 입력해 주세요.\n";
                
                int account;
                std::cin >> account;
                
                break;
            }
            case 2:
            {
                std::cout << "계좌번호를 입력해 주세요.\n";
                
                int account;
                std::cin >> account;
                
                
            }
            case 5:
            {
                std::cout << "프로그램을 종료합니다.\n";
                return 0;
                
                break;
            }
            default:
                break;
        }
    }
    return 0;
}

bool DuplicateCheckAccount(int account)
{
    int arrayLength = sizeof(accounts)/sizeof(*accounts);
    
    for (int i = 0; i < arrayLength; i++)
    {
        if(account = accounts[i])
        {
            return true;
        }
    }
    return false;
}
