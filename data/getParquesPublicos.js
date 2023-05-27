function getParques(numMunicipio){
 /* 0 = Mty
    1 = San Nico
    2 = Escobedo
    3 = Juarez
    4 = Guadalupe
    5 = Garcia
    6 = Apodaca */
 location_string = "";
 switch(numMunicipio){
  case 0:
   location_string = "monterrey";
   break;
  case 1:
   location_string = "san-nicolas-de-los-garza";
   break;
  case 2:
   location_string = "general-escobedo";
   break;
  case 3:
   location_string = "juarez";
   break;
  case 4:
   location_string = "guadalupe";
   break;
  case 5:
   location_string = "garcia";
   break;
  case 6:
   location_string = "apodaca";
   break;
  default:
   console.log("Al chile lo cagaste");
   break;
 }
}
