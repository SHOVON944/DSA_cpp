import java.util.ArrayList;
import java.util.Scanner;

class Account{
    private String account_Number;
    private double balance;

    public Account(String account_Number, double balance){
        this.account_Number = account_Number;
        this.balance = balance;
    }

    public String getAccountNumber(){
        return account_Number;
    }

    public double getBalance(){
        return balance;
    }

    public void deposit(double amount){
        balance += amount;
    }

    public boolean withdraw(double amount){
        if(balance-amount >= 0){
            balance -= amount;
            return true;
        } else{
            return false;
        }
    }
}

class Bank{
    private ArrayList<Account> accounts = new ArrayList<>();

    public void addAccount(String accNo, double initial_Balance){
        accounts.add(new Account(accNo, initial_Balance));
        System.out.println("Account added successfully.");
    }

    public void deleteAccount(String accNo){
        for(Account a : accounts){
            if(a.getAccountNumber().equals(accNo)){
                accounts.remove(a);
                System.out.println("Account deleted successfully.");
                return;
            }
        }
        System.out.println("Account not found.");
    }

    public Account findAccount(String accNo){
        for(Account a : accounts){
            if(a.getAccountNumber().equals(accNo)){
                return a;
            }
        }
        return null;
    }
}

public class ATM{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Bank bank = new Bank();

        while(true){
            System.out.println();
            System.out.println("---- ATM MENU ----");
            System.out.println("1. Add Account");
            System.out.println("2. Delete Account");
            System.out.println("3. Deposit");
            System.out.println("4. Withdraw");
            System.out.println("5. Exit");
            System.out.print("Enter choice: ");
            int choice = scan.nextInt();
            scan.nextLine();

            if(choice==1){
                System.out.print("Enter Account Number: ");
                String acc = scan.nextLine();
                System.out.print("Enter Initial Balance: ");
                double balance = scan.nextDouble();
                bank.addAccount(acc, balance);
            }

            else if(choice==2){
                System.out.print("Enter Account Number: ");
                String acc = scan.nextLine();
                bank.deleteAccount(acc);
            } else if(choice==3){
                System.out.print("Enter Account Number: ");
                String acc = scan.nextLine();
                Account a = bank.findAccount(acc);
                if(a!=null){
                    System.out.print("Enter amount to deposit: ");
                    double amt = scan.nextDouble();
                    a.deposit(amt);
                    System.out.println("New Balance: " + a.getBalance());
                } else{
                    System.out.println("Account not found.");
                }
            } else if (choice == 4) {
                System.out.print("Enter Account Number: ");
                String acc = scan.nextLine();
                Account a = bank.findAccount(acc);
                if(a!=null){
                    System.out.print("Enter amount to withdraw: ");
                    double amount = scan.nextDouble();
                    if(a.withdraw(amount)){
                        System.out.println("Withdrawal successful.");
                        System.out.println("Remaining Balance: " + a.getBalance());
                    } else{
                        System.out.println("Insufficient balance.");
                    }
                } else{
                    System.out.println("Account not found.");
                }
            } else if(choice==5){
                System.out.println("Thank you for using ATM.");
                break;
            } else{
                System.out.println("Invalid choice.");
            }
        }

        scan.close();
    }
}
