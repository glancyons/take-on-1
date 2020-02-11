var isChecked = false;
var allText = 'Override all';
var noneText = 'Remove all overrides';

$('#overrideAll').click(function() {
  if (isChecked == false) {
    $('.js-password-toggle').prop('checked', 'checked');
    $('#overrideAll span').text(noneText);
    isChecked = true;
  } else if (isChecked == true) {
    $('.js-password-toggle').prop('checked', false);
    $('#overrideAll span').text(allText);
    isChecked = false;
  }
});

$('.js-password-toggle').click(function() {
  if (isChecked == false) {
    $('#overrideAll span').text(allText);
    isChecked = true;
  } else if ($(':checked').length == $(':checkbox').length) {
    $('#overrideAll span').text(noneText);
    isChecked = true;
  } else {
    $('#overrideAll span').text(allText);
    isChecked = false;
  }
});
