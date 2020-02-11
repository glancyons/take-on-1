// Adds a button to check and uncheck all override checkboxes.
// Code is not production ready or tested.
// v0.1 11 Feb 2020
// Author: Martin Glancy
$(document).ready(function() {
  var allChecked = false;
  var allText = 'Override all';
  var noneText = 'Remove all overrides';
  var buttonHTML =
    '<button type="button" class="btn btn--secondary btn--small u-mb-m" id="overrideAll"><span class="btn__inner">' +
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
