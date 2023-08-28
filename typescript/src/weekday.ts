import readline from "readline";
import ps from "prompt-sync";

const prompt = ps({ sigint: true });

const day = parseInt(prompt("Day: "));
const month = parseInt(prompt("Month: "));
const year = parseInt(prompt("Year: "));

console.log(day, typeof day);
console.log(month, typeof month);
console.log(year, typeof year);

const weekdays = ["Monday", "Tuesday", "Webnesday", "Thursday", "Friday", "Saturday", "Sunday"]

const findWeekday = (day: number, month: number, year: number) => {
    // calculate total number of days after 1 Jan 1900, divide by 7

}

console.log(findWeekday(day, month, year))

