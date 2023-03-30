package cinema

var ticketPrice = 0
var nOfRows = 0
var nOfSeats = 0
var cinemaHall = MutableList(nOfRows) {MutableList(nOfSeats) { "S" }}
var purchasedTickets = 0
var totalSeats = nOfRows * nOfSeats
var income = 0
var purchasedList = mutableListOf<Int>()
var totalIncome = 0

fun showSeats() {
    print("\nCinema:\n  ")
    for (i in 1..nOfSeats) print("$i ")
    for (i in cinemaHall.indices) print("\n${i + 1} ${cinemaHall[i].joinToString(" ")}")
    println("\n")

    mainMenu()
}

fun buyTicket() {

    println("Enter a row number:" )
    var rowNumber = readln().toInt()

    println("Enter a seat number in that row: ")
    var seatNumber = readln().toInt()

    if (rowNumber > 9 || rowNumber < 0) {
        println("Wrong input!")
        buyTicket()

    } else if (seatNumber > 9 || seatNumber < 0) {
        println("Wrong input!")
        buyTicket()
    }

    if (cinemaHall[rowNumber - 1][seatNumber - 1] == "B") {
        println("That ticket has already been purchased!")
        buyTicket()
    } else cinemaHall[rowNumber - 1][seatNumber - 1] = "B"

    ticketPrice = if (rowNumber > 4) 8 else 10
    println("Ticket price: $$ticketPrice")
    purchasedTickets++
    purchasedList.add(ticketPrice)

    income = purchasedList.sum()

    mainMenu()
}

fun statistics() {
    var percentage = (purchasedTickets.toFloat() / totalSeats.toFloat()) * 100
    if (purchasedTickets == 0) {
        percentage = 0.0F
    }

    val formatPercentage = "%.2f".format(percentage)


    println("Number of purchased tickets: $purchasedTickets")
    println("Percentage: $formatPercentage%")
    println("Current income: $$income")
    println("Total income: $$totalIncome")

    mainMenu()
}

fun mainMenu() {

    println("1. Show the seats")
    println("2. Buy a ticket")
    println("3. Statistics")
    println("0. Exit")

    when (readln().toInt()) {
        1 -> showSeats()
        2 -> buyTicket()
        3 -> statistics()
        0 -> return
        else -> mainMenu()

    }

}

fun main() {
    // write your code here
    println("Enter the number of rows:")
    nOfRows = readln().toInt()

    println("Enter the number of seats in each row:")
    nOfSeats = readln().toInt()

    totalSeats = nOfRows * nOfSeats

    if (totalSeats < 60) {
        totalIncome = 10 * totalSeats
    } else {
        val frontHalf = nOfRows / 2
        totalIncome = (frontHalf * nOfSeats * 10) + ((totalSeats - (frontHalf * nOfSeats)) * 8)
    }

    cinemaHall = MutableList(nOfRows) {MutableList(nOfSeats) { "S" }}

    mainMenu()

}
