
const toggleButton = document.getElementById("button-menu");
const navWrapper = document.getElementById("nav");


toggleButton.addEventListener("click", () => {
  toggleButton.classList.toggle("close");
  navWrapper.classList.toggle("show");
});

navWrapper.addEventListener("click", e => {
  if (e.target.id === "nav") {
    navWrapper.classList.remove("show");
    toggleButton.classList.remove("close");
  }
});

document.getElementById("suggestion-form").addEventListener("submit", function(event) {
  event.preventDefault(); 

  
  var name = document.getElementById("name").value;
  var email = document.getElementById("email").value;
  var suggestion = document.getElementById("suggestion").value;

  
  var suggestionItem = document.createElement("div");
  suggestionItem.classList.add("suggestion-item");
  suggestionItem.innerHTML = "<strong>" + name + "</strong> (" + email + "):<br>" + suggestion;

  
  var suggestionList = document.getElementById("suggestion-list");
  suggestionList.appendChild(suggestionItem);

  
  document.getElementById("name").value = "";
  document.getElementById("email").value = "";
  document.getElementById("suggestion").value = "";
});

