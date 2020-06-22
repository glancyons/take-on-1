<script type="text/javascript">

window.onload = function () {
	var chart = new CanvasJS.Chart("chartContainer", {
		animationEnabled: true,
		theme: "light2",
		title:{
			text: "A graph showing periods and their corresponding values..",
			fontFamily: "OpenSans"
		},


		axisX:{
				valueFormatString: "MMM",
				crosshair: {
					enabled: true,
					snapToDataPoint: true
				}
			},
		axisY: {
			title: "Number of Visits",
			crosshair: {
				enabled: false
			}
			},
			toolTip:{
				shared:true
			},  
			legend:{
				cursor:"pointer",
				verticalAlign: "bottom",
				horizontalAlign: "left",
				dockInsidePlotArea: true,
				itemclick: toogleDataSeries
			},
			data: [
			{
				type: "line",
				showInLegend: true,
				name: "2014",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 105342 },

				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2015",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 158013 },
					{ x: new Date(2020, 11, 1), y: 81231 },
					{ x: new Date(2020, 10, 1), y: 79290 },
					{ x: new Date(2020, 9, 1), y: 82880 },
					{ x: new Date(2020, 8, 1), y: 83922 },
					{ x: new Date(2020, 7, 1), y: 61728 },
					{ x: new Date(2020, 6, 1), y: 77634 },
					{ x: new Date(2020, 5, 1), y: 83054 },
					{ x: new Date(2020, 4, 1), y: 84829 },
					{ x: new Date(2020, 3, 1), y: 57310 },
					{ x: new Date(2020, 2, 1), y: 80663 },
					{ x: new Date(2020, 1, 1), y: 79669 },

				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2016",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 131678 },
					{ x: new Date(2020, 11, 1), y: 121847 },
					{ x: new Date(2020, 10, 1), y: 63432 },
					{ x: new Date(2020, 9, 1), y: 82880 },
					{ x: new Date(2020, 8, 1), y: 76292 },
					{ x: new Date(2020, 7, 1), y: 77160 },
					{ x: new Date(2020, 6, 1), y: 85397 },
					{ x: new Date(2020, 5, 1), y: 75503 },
					{ x: new Date(2020, 4, 1), y: 70691 },
					{ x: new Date(2020, 3, 1), y: 64474 },
					{ x: new Date(2020, 2, 1), y: 67219 },
					{ x: new Date(2020, 1, 1), y: 79669 },

				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2017",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 105342 },
					{ x: new Date(2020, 11, 1), y: 121847 },
					{ x: new Date(2020, 10, 1), y: 63432 },
					{ x: new Date(2020, 9, 1), y: 82880 },
					{ x: new Date(2020, 8, 1), y: 91551 },
					{ x: new Date(2020, 7, 1), y: 84876 },
					{ x: new Date(2020, 6, 1), y: 69870 },
					{ x: new Date(2020, 5, 1), y: 83054 },
					{ x: new Date(2020, 4, 1), y: 84829 },
					{ x: new Date(2020, 3, 1), y: 64474 },
					{ x: new Date(2020, 2, 1), y: 67219 },
					{ x: new Date(2020, 1, 1), y: 86912 },

				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2018",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 105342 },
					{ x: new Date(2020, 11, 1), y: 101539 },
					{ x: new Date(2020, 10, 1), y: 63432 },
					{ x: new Date(2020, 9, 1), y: 75346 },
					{ x: new Date(2020, 8, 1), y: 68663 },
					{ x: new Date(2020, 7, 1), y: 69444 },
					{ x: new Date(2020, 6, 1), y: 93160 },
					{ x: new Date(2020, 5, 1), y: 60403 },
					{ x: new Date(2020, 4, 1), y: 77760 },
					{ x: new Date(2020, 3, 1), y: 85965 },
					{ x: new Date(2020, 2, 1), y: 67219 },
					{ x: new Date(2020, 1, 1), y: 79669 },

				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2019",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 12, 1), y: 131678 },
					{ x: new Date(2020, 11, 1), y: 101539 },
					{ x: new Date(2020, 10, 1), y: 79290 },
					{ x: new Date(2020, 9, 1), y: 75346 },
					{ x: new Date(2020, 8, 1), y: 76292 },
					{ x: new Date(2020, 7, 1), y: 77160 },
					{ x: new Date(2020, 6, 1), y: 77634 },
					{ x: new Date(2020, 5, 1), y: 75503 },
					{ x: new Date(2020, 4, 1), y: 70691 },
					{ x: new Date(2020, 3, 1), y: 71637 },
					{ x: new Date(2020, 2, 1), y: 67219 },


				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2020",
				lineDashType: "dash",
				dataPoints: [
					{ x: new Date(2020, 6, 1), y: 62107 },
					{ x: new Date(2020, 5, 1), y: 60403 },
					{ x: new Date(2020, 4, 1), y: 70691 },
					{ x: new Date(2020, 3, 1), y: 71637 },
					{ x: new Date(2020, 2, 1), y: 73941 },
				]
			},
			
			
			
			]

	});
	chart.render();

function toogleDataSeries(e){
	if (typeof(e.dataSeries.visible) === "undefined" || e.dataSeries.visible) {
		e.dataSeries.visible = false;
	} else{
		e.dataSeries.visible = true;
	}
	chart.render();
}


}
</script>
