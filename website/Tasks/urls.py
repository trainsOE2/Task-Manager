from django.conf.urls import url
from . import views

app_name = 'Tasks'

urlpatterns = [
    url(r'^$', views.IndexView.as_view(), name='index'),

    url(r'^(?P<job_id>[0-9]+)/$', views.DetailView.as_view(), name='detail' ),


]
