const DaysInMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        function DaysInFeb(year) {
            if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) {
                DaysInMonth[1] = 29;
            }
            else {
                DaysInMonth[1] = 28;
            }
        }
        function displayResult(tDate, tMonth, tYear) {
            document.getElementById("years").textContent = tYear;
            document.getElementById("month").textContent = tMonth;
            document.getElementById("days").textContent = tDate;
        }
        function ageFunction() {
            let today = new Date();
            let selectedDate = new Date(document.getElementById("selected date").value);
            let selectedDay, selectedMonth, selectedYear;
            let selectedDetails = {
                date: selectedDate.getDate(),
                month: selectedDate.getMonth(),
                year: selectedDate.getFullYear()
            };
            let currentDate = today.getDate();
            let currentMonth = today.getMonth();
            let currentYear = today.getFullYear();

            DaysInFeb(currentYear);

            if (selectedDetails.year > currentYear || (selectedDetails.month > currentMonth && selectedDetails.year == currentYear) || (selectedDetails.date > currentDate && selectedDetails.month == currentMonth && selectedDetails.year == currentYear)) {
                alert("NOT YET BORN !!!!");
                displayResult("-", "-", "-");
                return;
            }

            if (selectedDetails.date > currentDate) {
                currentDate = currentDate + DaysInMonth[selectedDetails.month - 1];
                currentMonth = currentMonth - 1;
            }
            if (selectedDetails.month > currentMonth) {
                currentYear = currentYear - 1;
                currentMonth = currentMonth + 12;
            }
            selectedDay = currentDate - selectedDetails.date;
            selectedMonth = currentMonth - selectedDetails.month;
            selectedYear = currentYear - selectedDetails.year;
            displayResult(selectedDay, selectedMonth, selectedYear);
        }