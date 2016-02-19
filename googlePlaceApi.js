
var googlePlaceApi = {
var url = "https://maps.googleapis.com/maps/api/place/autocomplete/json";
var type = "address";
var language = "sv";
var key = "AIzaSyBZd-5ymSL7-aE3BhM-w995FZygAvbTMWg";
var input = "" //Address input
var params = "url="+url+"&type="+type+"&language="+language+"&key="+key+"&input="+input;
​
var http = new XMLHttpRequest();
http.open("GET", url+"?"+params, true);
http.onreadystatechange = function() {
  if(http.readyState == 4 && http.status == 200) {
    debug_log(http.responseText);
    var myArr = JSON.parse(http.responseText);
  }
}
//http.send(params);
};
module.exports = googlePlaceApi;