var Observable = require("FuseJS/Observable");
var data = Observable("as");
var searchString = Observable("");
var searchResults = "";
function searchForPlace(){
	
	fetch('http://www.yr.no/_/websvc/jsonforslagsboks.aspx?s=trondh')
    .then(function(response) { return response.json(); })
    .then(function(responseObject) { data.value = responseObject[1][0][0]; });
}

module.exports={
	searchResults: searchResults,
	searchString: searchString,
	data: data,
	searchForPlace: searchForPlace

}
