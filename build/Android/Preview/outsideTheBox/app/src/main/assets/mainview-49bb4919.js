var Observable = require("FuseJS/Observable");

 	
var locations = {
                        "Playa de las Americas": "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSRpbFs7aeVYvtiQDisVajg_yC8R-2N-rboxVxJXmy4sDdKch9fvQ",
                        "San Diego": "http://www.sandiegomagazine.com/images/2014/february/love-sd/san-diego-sunset.jpg",
                        "Oslo": "https://upload.wikimedia.org/wikipedia/commons/a/a7/Barcode_night_Oslo_Dark_MVRDV_alab.jpg",
                        "default": "http://www.romantic24.com/wp-content/uploads/2015/01/The-Unexplored-Exotic-Lanes-of-the-Grand-Canyon-11.jpg"
                    }

var locationName=Observable("");    
var searchString = Observable("")
var locationImageUrl = Observable("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSRpbFs7aeVYvtiQDisVajg_yC8R-2N-rboxVxJXmy4sDdKch9fvQ")
var visibility="Hidden"
function searchClick (args) { 
		console.log("searchString: " + searchString.value)
	locationName.value = searchString.value
    locationImageUrl.value = locations[searchString.value]

    if (locationImageUrl.value === undefined) {
        locationImageUrl.value = locations["default"]
    }
	
    console.log(locations[searchString.value])

    searchString.value = ""
}

function setVisibility(args){
    console.log(args);
    return "Hidden";
}

module.exports = {
    locationName: locationName,
    weatherIconBehind : "Assets/sun.png",
    locationImageUrl: locationImageUrl,
    searchString: searchString,
    searchClick: searchClick,
    dropletcolor: "#0F1D87",
    setVisibility: setVisibility,
    visibility:visibility
};