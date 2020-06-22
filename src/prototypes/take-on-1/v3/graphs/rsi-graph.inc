<script type="text/javascript">

window.onload = function () {

	var chart = new CanvasJS.Chart (
		"chartContainer",
		{
		animationEnabled: false,
		theme: "light2",
		title:{
			text: ""
		},
		axisX:{
				title: "Period",
				valueFormatString: "MMM",
				titleFontSize: 18,
				titleFontFamily: "OpenSans",
				titleFontWeight: "bold",
				labelFontSize: 18,
				labelFontFamily: "OpenSans"
			},
		axisY: {
			title: "Sales (£)",
			minimum: 50000,
			maximum: 150000,
			titleFontSize: 18,
			titleFontFamily: "OpenSans",
			titleFontWeight: "bold",
			labelFontSize: 18,
			labelFontFamily: "OpenSans"
		},
		toolTip:{
		   fontStyle: "normal",
			 fontSize: 14,
			 fontFamily: "OpenSans",
			 shared: true,
			 cornerRadius: 0,
			 borderColor: "#222222",
			 borderThickness: 1
		  },
		legend: {
				cursor:"pointer",
				verticalAlign: "top",
				horizontalAlign: "left",
				dockInsidePlotArea: false,
				itemclick: toogleDataSeries,
				fontSize: 18,
				fontFamily: "OpenSans"
		},
		data: [
			{
				type: "line",
				showInLegend: true,
				name: "2015",
				lineDashType: "solid",
				dataPoints: [
					{ x: new Date(2020, 11, 1), y: 105342 },
					{ x: new Date(2020, 10, 1), y: 91385 },
					{ x: new Date(2020, 9, 1), y: 87219 },
					{ x: new Date(2020, 8, 1), y: 60276 },
					{ x: new Date(2020, 7, 1), y: 68663 },
					{ x: new Date(2020, 6, 1), y: 77160 },
					{ x: new Date(2020, 5, 1), y: 85397 },
					{ x: new Date(2020, 4, 1), y: 83054 },
					{ x: new Date(2020, 3, 1), y: 77760 },
					{ x: new Date(2020, 2, 1), y: 71637 },
					{ x: new Date(2020, 1, 1), y: 73941 },
					{ x: new Date(2020, 0, 1), y: 72426 }
				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2016",
				lineDashType: "solid",
				dataPoints: [

					{ x: new Date(2020, 11, 1), y: 118510 },
					{ x: new Date(2020, 10, 1), y: 81231 },
					{ x: new Date(2020, 9, 1), y: 71361 },
					{ x: new Date(2020, 8, 1), y: 82880 },
					{ x: new Date(2020, 7, 1), y: 91551 },
					{ x: new Date(2020, 6, 1), y: 61728 },
					{ x: new Date(2020, 5, 1), y: 85397 },
					{ x: new Date(2020, 4, 1), y: 90604 },
					{ x: new Date(2020, 3, 1), y: 70691 },
					{ x: new Date(2020, 2, 1), y: 78801 },
					{ x: new Date(2020, 1, 1), y: 53775 }
				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2017",
				lineDashType: "solid",
				dataPoints: [
					{ x: new Date(2020, 11, 1), y: 105342 },
					{ x: new Date(2020, 10, 1), y: 91385 },
					{ x: new Date(2020, 9, 1), y: 63432 },
					{ x: new Date(2020, 8, 1), y: 75346 },
					{ x: new Date(2020, 7, 1), y: 83922 },
					{ x: new Date(2020, 6, 1), y: 77160 },
					{ x: new Date(2020, 5, 1), y: 69870 },
					{ x: new Date(2020, 4, 1), y: 60403 },
					{ x: new Date(2020, 3, 1), y: 70691 },
					{ x: new Date(2020, 2, 1), y: 71637 },
					{ x: new Date(2020, 1, 1), y: 60497 },
					{ x: new Date(2020, 0, 1), y: 65184 }
				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2018",
				lineDashType: "solid",
				dataPoints: [
					{ x: new Date(2020, 11, 1), y: 131678 },
					{ x: new Date(2020, 10, 1), y: 111693 },
					{ x: new Date(2020, 9, 1), y: 79290 },
					{ x: new Date(2020, 8, 1), y: 82880 },
					{ x: new Date(2020, 7, 1), y: 76292 },
					{ x: new Date(2020, 6, 1), y: 84876 },
					{ x: new Date(2020, 5, 1), y: 62107 },
					{ x: new Date(2020, 4, 1), y: 90604 },
					{ x: new Date(2020, 3, 1), y: 77760 },
					{ x: new Date(2020, 2, 1), y: 64474 },
					{ x: new Date(2020, 1, 1), y: 60497 },
					{ x: new Date(2020, 0, 1), y: 57941 }
				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2019",
				lineDashType: "solid",
				dataPoints: [
					{ x: new Date(2020, 11, 1), y: 131678 },
					{ x: new Date(2020, 10, 1), y: 101539 },
					{ x: new Date(2020, 9, 1), y: 79290 },
					{ x: new Date(2020, 8, 1), y: 75346 },
					{ x: new Date(2020, 7, 1), y: 76292 },
					{ x: new Date(2020, 6, 1), y: 77160 },
					{ x: new Date(2020, 5, 1), y: 77634 },
					{ x: new Date(2020, 4, 1), y: 75503 },
					{ x: new Date(2020, 3, 1), y: 70691 },
					{ x: new Date(2020, 2, 1), y: 71637 },
					{ x: new Date(2020, 1, 1), y: 67219 },
					{ x: new Date(2020, 0, 1), y: 72426 }
				]
			},
			{
				type: "line",
				showInLegend: true,
				name: "2020",
				lineDashType: "solid",
				dataPoints: [
					{ x: new Date(2020, 5, 1), y: 93160 },
					{ x: new Date(2020, 4, 1), y: 75503 },
					{ x: new Date(2020, 3, 1), y: 56552 },
					{ x: new Date(2020, 2, 1), y: 85965 },
					{ x: new Date(2020, 1, 1), y: 53775 },
					{ x: new Date(2020, 0, 1), y: 79669 }
				]
			},
			]
		}
	);

	chart.render();

	function toogleDataSeries(e){
		if (typeof(e.dataSeries.visible) === "undefined" || e.dataSeries.visible) {
			e.dataSeries.visible = false;
		} else{
			e.dataSeries.visible = true;
		}
		chart.render();
	}

};
</script>
