let url = "https://script.google.com/macros/s/AKfycbwRju_1-TZwYdJXdi1UOXc9ZGmH4vR4lpXSgAqG9CFMkDPGmRDuGOGgR3WSXz9sPqdu/exec";

let response = await fetch(url, {
      method: "POST",
      headers: {
            "Content-Type": "application/json",
      },
      body: JSON.stringify({
            patientID: "P0001",
            spo2: 100,
            hr: 124.3,
            temp: 35.54
      }),
});

let result = await response.json();
console.log(result);
