{% if q.Status == "Validations" %}
    <tr class="table__row" bgcolor="#fbecec">
{% elif  q.Status == "Edited" %}
    <tr class="table__row" bgcolor="#eff0f9">
{% else %}
    <tr class="table__row">
{% endif %}

    <td class="table__cell ">
        {{ q.Number }}
    </td>
    <td class="table__cell ">
        {{ q.Question }}
    </td>
    <td class="table__cell table__cell--numeric">
        {% set charLimit = 100 %}
        {% if q.Response | length > charLimit %}
            {{ q.Response.slice(0, charLimit) }}... [View for more]
        {% else %}
            {{ q.Response }}
        {% endif %}
    </td>

    {% if showAdjustedCol %}
      <td class="table__cell table__cell--numeric">
          {{ q.Adjusted }}
      </td>
    {% endif %}

    <td class="table__cell ">
        {% if q.Status == "Edited" %}
            <span class='status status--info'>{{ q.Status }}</span>
        {% endif %}

        {% if q.Status == "Validations" %}


            {% for v in q.ValidationMessages %}

                <span class='status status--error to-validation'>{{ v }}</span>
                <br>

             {% endfor %}

        {% endif %}
    </td class="table__cell ">

    <td class="table__cell ">
        <a href="/prototypes/take-on-1/v3/view-form-rsi.html" role="button" class="btn btn--secondary btn--small"><span class="btn__inner">View</span></a>
    </td>

</tr>
