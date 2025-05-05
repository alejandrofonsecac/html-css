const menuToggle = document.getElementById("menu-toggle");
const sideMenu = document.getElementById("side-menu");

menuToggle.addEventListener("click", () => {
  sideMenu.style.left = sideMenu.style.left === "0px" ? "-100%" : "0px";
});
