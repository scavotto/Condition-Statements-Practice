// This program is supposed to display every fifth year
// starting with 2024; that is, 2024, 2029, 2034, 2039,
// and so on, for 30 years.
start

   Declarations
      num year
      num START_YEAR = 2024
      num FACTOR = 5
      num NUM_YEAR = 30

    year = START_YEAR

    while year <= START_YEAR + NUM_YEARS
        output year
        year = year + FACTOR
    endwhile
stop