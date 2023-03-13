package machine
import kotlin.system.exitProcess

class coffeeMachine() {
    var waterCapacity = 400
    var milkCapacity = 540
    var beansCapacity = 120
    var disposableCups = 9
    var money = 550

    fun remainingSupplies() {
        println("")
        println("The coffee machine has:")
        println("$waterCapacity ml of water")
        println("$milkCapacity ml of milk")
        println("$beansCapacity g of coffee beans")
        println("$disposableCups disposable cups")
        println("$$money of money")
        main()
    }
    fun buyCoffee() {
        println("")
        println("What do you want to buy? 1 - espresso, 2 - latte, 3 - cappuccino, back - to main menu:")
        var coffeeChoice = readln()

        when (coffeeChoice) {
            "1" -> {
                //buying espresso
                if (waterCapacity >= 250 && beansCapacity >= 16 && disposableCups >= 1) {
                    println("I have enough resources, making you a coffee!")
                    waterCapacity = waterCapacity - 250
                    beansCapacity = beansCapacity - 16
                    disposableCups = disposableCups - 1
                    money = money + 4
                } else if (waterCapacity < 250) {
                    println("Sorry, not enough water!")
                } else if (beansCapacity < 16) {
                    println("Sorry, not enough beans!")
                } else if (disposableCups < 1) {
                    println("Sorry, not enough cups!")
                } else {
                    println("Do you want to go back?")
                }

            }
            "2" -> {
                //buying latte
                if (waterCapacity >= 350 && beansCapacity >= 20 && disposableCups >= 1) {
                    println("I have enough resources, making you a coffee!")
                    waterCapacity = waterCapacity - 350
                    beansCapacity = beansCapacity - 20
                    milkCapacity = milkCapacity - 75
                    disposableCups = disposableCups - 1
                    money = money + 7
                } else if (waterCapacity < 350) {
                    println("Sorry, not enough water!")
                } else if (beansCapacity < 20) {
                    println("Sorry, not enough beans!")
                } else if (disposableCups < 1) {
                    println("Sorry, not enough cups!")
                } else {
                    println("Do you want to go back?")
                }

            }
            "3" -> {
                //buying cappuccino\
                if (waterCapacity >= 200 && beansCapacity >= 12 && disposableCups >= 1) {
                    println("I have enough resources, making you a coffee!")
                    waterCapacity = waterCapacity - 200
                    beansCapacity = beansCapacity - 12
                    milkCapacity = milkCapacity - 100
                    disposableCups = disposableCups - 1
                    money = money + 6
                } else if (waterCapacity < 200) {
                    println("Sorry, not enough water!")
                } else if (beansCapacity < 12) {
                    println("Sorry, not enough beans!")
                } else if (disposableCups < 1) {
                    println("Sorry, not enough cups!")
                } else {
                    println("Do you want to go back?")
                }
            }
            "back" -> {
                main()
            }
        }

    }
    fun fillMachine() {
        println("")
        println("Write how many ml of water you want to add:")
        var waterAdded = readln().toInt()

        println("")
        println("Write how many ml of milk you want to add:")
        var milkAdded = readln().toInt()

        println("")
        println("Write how many grams of coffee beans you want to add:")
        var beansAdded = readln().toInt()

        println("")
        println("Write how many disposable cups you want to add:")
        var cupsAdded = readln().toInt()

        waterCapacity = waterCapacity + waterAdded
        milkCapacity = milkCapacity + milkAdded
        beansCapacity = beansCapacity + beansAdded
        disposableCups = disposableCups + cupsAdded

    }
    fun takeMoney() {
        println("")
        println("I gave you $$money")
        money = 0

    }
}

fun main() {

    val coffeeMachine = coffeeMachine()
    println("Write action (buy, fill, take, remaining, exit):")

    while (1 > 0) {
        var userInput = readln()
        when (userInput) {
            "buy" -> coffeeMachine.buyCoffee()
            "fill" -> coffeeMachine.fillMachine()
            "take" -> coffeeMachine.takeMoney()
            "remaining" -> coffeeMachine.remainingSupplies()
            "exit" -> exitProcess(0)
            else -> println("incorrect input")
        }

    }
}


