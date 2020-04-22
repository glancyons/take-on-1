// Get query string
$(document).ready(function() {
  var queries = {};
  $.each(document.location.search.substr(1).split('&'), function(c, q) {
    var i = q.split('=');
    queries[i[0].toString()] = i[1].toString();
  });
  console.log(queries);
  var companyName = decodeURIComponent(queries.c);
  companyName = companyName.replace(/\+/g, ' ');
  $('h1.companyName').text(companyName);
  $('#c').val(companyName);
  var theURL = $('.modallink a').attr('href');
  $('.modallink a').attr('href', theURL + '?c=' + queries.c);
});

// Toggles reason with radio buttons.
// Code is not production ready or tested.
// v0.1 22 April 2020
// Author: Martin Glancy

$(document).ready(function() {
  // Hide all the other text boxes on load
  $('.radio__other').toggleClass('u-vh');

  // Show text box if user clicks either preceeding radio
  $('.js-textbox-toggle').click(function() {
    $(this)
      .parents('.fieldset')
      .next('.radio__other')
      .removeClass('u-vh');
  });
});

// Adds a button to check and uncheck all override checkboxes.
// Code is not production ready or tested.
// v0.1 11 Feb 2020
// Author: Martin Glancy
$(document).ready(function() {
  var allChecked = false;
  var allText = 'Override all';
  var noneText = 'Remove all overrides';
  var buttonHTML =
    '<button type="button" class="btn btn--secondary btn--small u-mb-m" id="overrideAll" aria-live="polite"><span class="btn__inner">' +
    allText +
    '</span></button>';

  // Add button with JavaScript so that it does not appear if JS is disabled.
  $('#overrideForm').prepend(buttonHTML);

  // Check all and uncheck all toggle
  $('#overrideAll').click(function() {
    if (allChecked == false) {
      $('.js-password-toggle').prop('checked', 'checked');
      $('#overrideAll span').text(noneText);
      allChecked = true;
    } else if (allChecked == true) {
      $('.js-password-toggle').prop('checked', false);
      $('#overrideAll span').text(allText);
      allChecked = false;
    }
  });

  // Change button state if user checks all or unchecks one checkbox
  $('.js-password-toggle').click(function() {
    if (allChecked == true) {
      $('#overrideAll span').text(allText);
      isChecked = false;
    } else if ($(':checked').length == $(':checkbox').length) {
      // all checkboxes are checked
      $('#overrideAll span').text(noneText);
      allChecked = true;
    } else {
      $('#overrideAll span').text(allText);
      allChecked = false;
    }
  });
});
